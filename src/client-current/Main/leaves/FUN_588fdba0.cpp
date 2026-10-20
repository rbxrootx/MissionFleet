// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588FDBA0 .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_588fdba0() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 2ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esi + 100h]
        xor eax, 0c20ae06bh
        add eax, dword ptr [esp + 8]
        push 0
        xor eax, 0c20ae06bh
        mov dword ptr [esi + 100h], eax
        xor eax, 0c20ae06bh
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 CD BA EC FF: call 0x587c96a0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xba
        __asm _emit 0xec
        __asm _emit 0xff
        mov al, 1
        cmp byte ptr [esi + 0fch], al
        ; Exact mapped bytes 75 0D: jne 0x588fdbea
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 34h]
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov byte ptr [esi + 0fch], al
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
