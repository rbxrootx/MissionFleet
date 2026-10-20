// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588CE420 .. +0x86 bytes.
extern "C" __declspec(naked) void FUN_588ce420() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0a0h]
        mov eax, dword ptr [eax + 80h]
        push eax
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 15: jne 0x588ce44f
        __asm _emit 0x75
        __asm _emit 0x15
        push eax
        push eax
        push eax
        push 32h
        ; Exact mapped bytes E8 AC D6 E9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xd6
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E5 68 E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x68
        __asm _emit 0xe9
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ret
        mov ecx, dword ptr [esi + 0a0h]
        mov edx, dword ptr [ecx + 80h]
        xor eax, eax
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov cl, byte ptr [eax + edx]
        cmp cl, 30h
        ; Exact mapped bytes 7C 26: jl 0x588ce48e
        __asm _emit 0x7c
        __asm _emit 0x26
        cmp cl, 39h
        ; Exact mapped bytes 7F 21: jg 0x588ce48e
        __asm _emit 0x7f
        __asm _emit 0x21
        inc eax
        cmp eax, 4
        ; Exact mapped bytes 7C ED: jl 0x588ce460
        __asm _emit 0x7c
        __asm _emit 0xed
        push edx
        ; Exact mapped bytes E8 1F EA 0A 00: call 0x5897ce98
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xea
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [esi + 9ch]
        add esp, 4
        cmp dword ptr [edx + 64h], eax
        ; Exact mapped bytes 75 07: jne 0x588ce48e
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        pop esi
        ret
        push 0
        push 0
        push 0
        push 33h
        ; Exact mapped bytes E8 55 D6 E9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xd6
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8E 68 E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x68
        __asm _emit 0xe9
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ret
    }
}
