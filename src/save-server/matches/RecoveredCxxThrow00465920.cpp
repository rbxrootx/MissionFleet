// Exact recovered Visual C++ exception throw adapter.
extern "C" unsigned char ThrowTemplate00465920;
extern "C" void (*ThrowImport00465920)();
extern "C" __declspec(naked) void AllocCall00465920()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 20h
    __asm push esi
    __asm push edi
    __asm mov ecx, 8
    __asm mov esi, offset ThrowTemplate00465920
    __asm lea edi, dword ptr [ebp-20h]
    __asm rep movsd
    __asm mov eax, dword ptr [ebp+8]
    __asm mov dword ptr [ebp-8], eax
    __asm mov ecx, dword ptr [ebp+12]
    __asm mov dword ptr [ebp-4], ecx
    __asm lea edx, dword ptr [ebp-12]
    __asm push edx
    __asm mov eax, dword ptr [ebp-16]
    __asm push eax
    __asm mov ecx, dword ptr [ebp-28]
    __asm push ecx
    __asm mov edx, dword ptr [ebp-32]
    __asm push edx
    __asm call dword ptr [ThrowImport00465920]
    __asm pop edi
    __asm pop esi
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}
