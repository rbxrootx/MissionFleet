// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100CF780 .. +0x81 bytes.
extern "C" __declspec(naked) void FUN_100cf780_100CF780() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 6ch]
        and eax, 0e1ffh
        or eax, 107h
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 80h]
        push eax
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        xor ecx, ecx
        test eax, eax
        ; Exact mapped bytes 7E 1F: jle 0x100cf7ca
        __asm _emit 0x7e
        __asm _emit 0x1f
        mov edx, dword ptr [esi + 6ch]
        inc ecx
        cmp ecx, eax
        mov edx, dword ptr [edx + 80h]
        mov byte ptr [edx], 0
        mov edx, dword ptr [esi + 6ch]
        mov edx, dword ptr [edx + 80h]
        mov byte ptr [edx + ecx - 1], 0
        ; Exact mapped bytes 7C E1: jl 0x100cf7ab
        __asm _emit 0x7c
        __asm _emit 0xe1
        mov ecx, dword ptr [esi + 6ch]
        ; Exact mapped bytes E8 EE C5 F4 FF: call 0x1001bdc0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xc5
        __asm _emit 0xf4
        __asm _emit 0xff
        mov eax, dword ptr [esi + 8]
        mov dword ptr [esi + 50h], 154h
        mov dword ptr [esi + 54h], eax
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        ; Exact mapped bytes E8 C4 DA FE FF: call 0x100bd2b0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xda
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D E4 56 1C 10: mov ecx, dword ptr [0x101c56e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 64h
        push esi
        mov ecx, dword ptr [ecx + 30h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        pop esi
        ret
    }
}
