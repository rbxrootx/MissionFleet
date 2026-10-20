// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C48F0 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_587c48f0() {
    __asm {
        ; Exact mapped bytes A1 1C 48 A2 58: mov eax, dword ptr [0x58a2481c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 0bch]
        push esi
        push edi
        mov edi, ecx
        xor ecx, ecx
        mov dword ptr [edi + 8], eax
        mov edx, 4
        mul edx
        seto cl
        neg ecx
        or ecx, eax
        push ecx
        ; Exact mapped bytes E8 16 CC 1A 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xcc
        __asm _emit 0x1a
        __asm _emit 0x00
        xor esi, esi
        add esp, 4
        cmp dword ptr [edi + 8], esi
        mov dword ptr [edi + 4], eax
        ; Exact mapped bytes 7E 1B: jle 0x587c4940
        __asm _emit 0x7e
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 0D 1C 48 A2 58: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        lea eax, [esi + 1]
        push eax
        ; Exact mapped bytes E8 0C 50 FB FF: call 0x58779940
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x50
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 4]
        mov dword ptr [ecx + esi*4], eax
        inc esi
        cmp esi, dword ptr [edi + 8]
        ; Exact mapped bytes 7C E5: jl 0x587c4925
        __asm _emit 0x7c
        __asm _emit 0xe5
        pop edi
        pop esi
        ret
    }
}
