// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A3FDA .. +0x5A bytes.
extern "C" __declspec(naked) void FUN_004a3fda_004A3FDA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        push 1
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 78h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 78h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 28: call dword ptr [edx + 0x28]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x28
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ecx + 54h]
        ; Exact mapped bytes E8 F5 80 09 00: call 0x53c0fb
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x80
        __asm _emit 0x09
        __asm _emit 0x00
        lea edx, [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 78h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 78h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        push 1
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 78h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 78h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 24: call dword ptr [edx + 0x24]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x24
        mov esp, ebp
        pop ebp
        ret
    }
}
