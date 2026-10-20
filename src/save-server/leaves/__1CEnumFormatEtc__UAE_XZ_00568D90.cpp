// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00568D90 .. +0x63 bytes.
extern "C" __declspec(naked) void __1CEnumFormatEtc__UAE_XZ_00568D90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax], 63ba54h
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 3C: jne 0x568de7
        __asm _emit 0x75
        __asm _emit 0x3c
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 24h]
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x568dc6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + 2ch]
        ; Exact mapped bytes 73 16: jae 0x568de7
        __asm _emit 0x73
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 8]
        imul ecx, ecx, 14h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 4]
        push eax
        ; Exact mapped bytes FF 15 18 C3 68 00: call dword ptr [0x68c318]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB D6: jmp 0x568dbd
        __asm _emit 0xeb
        __asm _emit 0xd6
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 72 E2 FF FF: call 0x567061
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
