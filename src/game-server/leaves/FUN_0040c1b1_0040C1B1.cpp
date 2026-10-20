// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040C1B1 .. +0x5F bytes.
extern "C" __declspec(naked) void FUN_0040c1b1_0040C1B1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AD 04 08 00: call 0x48c682
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x04
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        ; Exact mapped bytes E8 1F 93 12 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x93
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov esi, esp
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 7C: call dword ptr [edx + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x7c
        cmp esi, esp
        ; Exact mapped bytes E8 E8 C5 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 81 00 00 00: call 0x40c280
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 D6 C5 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xc5
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
