// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588C0820 .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_588c0820() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, 2
        cmp dword ptr [esp + 0ch], ecx
        ; Exact mapped bytes 75 5F: jne 0x588c088d
        __asm _emit 0x75
        __asm _emit 0x5f
        mov eax, dword ptr [esp + 8]
        cmp eax, dword ptr [esi + 70h]
        ; Exact mapped bytes 75 39: jne 0x588c0870
        __asm _emit 0x75
        __asm _emit 0x39
        ; Exact mapped bytes A1 98 45 A2 58: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 0d78h]
        mov edx, dword ptr [ecx + 48h]
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        push 0
        push 0
        shr edx, 0ah
        push edx
        push 0
        push 8001d001h
        ; Exact mapped bytes E8 0F 04 0B 00: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x04
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 74h]
        ; Exact mapped bytes 75 18: jne 0x588c088d
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes A1 98 45 A2 58: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 0db4h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
