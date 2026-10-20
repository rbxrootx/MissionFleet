// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58781B90 .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_58781b90_58781B90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 89 63 D0 FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x63
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 0ch], edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 59 63 D0 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x63
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 09 EB FF FF: call 0x587806d0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
