// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883AAC0 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_5883aac0_5883AAC0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        push esi
        mov esi, dword ptr [ebp + 0ch]
        push edi
        xor edi, edi
        mov dword ptr [ebp - 4], eax
        cmp eax, esi
        ; Exact mapped bytes 74 0E: je 0x5883aae3
        __asm _emit 0x74
        __asm _emit 0x0e
        lea ecx, [ebp - 4]
        inc edi
        ; Exact mapped bytes E8 82 7C C6 FF: call 0x584a2760
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x7c
        __asm _emit 0xc6
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], esi
        ; Exact mapped bytes 75 F2: jne 0x5883aad5
        __asm _emit 0x75
        __asm _emit 0xf2
        mov eax, edi
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
