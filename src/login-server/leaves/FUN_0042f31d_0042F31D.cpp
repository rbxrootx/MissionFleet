// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042F31D .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_0042f31d_0042F31D() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        mov esi, ecx
        test ebx, ebx
        ; Exact mapped bytes 75 04: jne 0x42f32d
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 24: jmp 0x42f351
        __asm _emit 0xeb
        __asm _emit 0x24
        push edi
        push 1
        ; Exact mapped bytes E8 31 FF FF FF: call 0x42f266
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        push ebx
        mov dword ptr [esi + 1ch], ebx
        lea ecx, [edi + 4]
        ; Exact mapped bytes E8 8B E4 FF FF: call 0x42d7ce
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        push edi
        mov ecx, esi
        mov dword ptr [eax], esi
        ; Exact mapped bytes E8 AD F0 FF FF: call 0x42e3fa
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        pop eax
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
