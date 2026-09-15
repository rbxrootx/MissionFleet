extern "C" void Call00522B6D();
// Exact recovered repeated medium routine.
extern "C" __declspec(naked) void Recovered00522C47()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp + 0x18]
    __asm push eax
    __asm push 1
    __asm mov ecx, dword ptr [ebp + 0x10]
    __asm sub ecx, 1
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 0xc]
    __asm push edx
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call00522B6D
    __asm mov ecx, dword ptr [ebp + 0x18]
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 0x14]
    __asm sub edx, 1
    __asm push edx
    __asm push 1
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm push ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call00522B6D
    __asm mov edx, dword ptr [ebp + 0x1c]
    __asm push edx
    __asm mov eax, dword ptr [ebp + 0x14]
    __asm push eax
    __asm push -1
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 8]
    __asm add edx, dword ptr [ebp + 0x10]
    __asm push edx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call00522B6D
    __asm mov eax, dword ptr [ebp + 0x1c]
    __asm push eax
    __asm push -1
    __asm mov ecx, dword ptr [ebp + 0x10]
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 0xc]
    __asm add edx, dword ptr [ebp + 0x14]
    __asm push edx
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call00522B6D
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 0x18
}
