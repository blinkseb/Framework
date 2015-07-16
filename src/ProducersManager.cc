#include <cp3_llbb/Framework/interface/ProducersManager.h>

#include <cp3_llbb/Framework/interface/Framework.h>
#include <cp3_llbb/Framework/interface/Producer.h>

ProducersManager::ProducersManager(ExTreeMaker* framework):
    m_framework(framework) {
        // Empty
}

const Framework::Producer& ProducersManager::get(const std::string& name) const {
    return m_framework->getProducer(name);
}

bool ProducersManager::exists(const std::string& name) const {
    return m_framework->producerExists(name);
}
