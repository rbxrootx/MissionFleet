// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045F700 .. +0x5F bytes.
extern "C" __declspec(naked) void FUN_0045f700_0045F700() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov esi, esp
        ; Exact mapped bytes FF 15 F8 23 5E 00: call dword ptr [0x5e23f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C2 90 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 30h], eax
        mov esi, esp
        ; Exact mapped bytes FF 15 F8 23 5E 00: call dword ptr [0x5e23f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 AD 90 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 2ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2ch]
        add ecx, 0ea60h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 28h], ecx
        mov eax, 1
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 85 90 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
