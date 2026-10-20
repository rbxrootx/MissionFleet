// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58877942 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_58877942_58877942() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        push edi
        ; Exact mapped bytes E8 52 12 FF FF: call 0x58868ba0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x12
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, eax
        xor edi, edi
        mov ecx, dword ptr [edx + 54h]
        lea esi, [ecx + 2]
        ; Exact mapped bytes 66 8B 01: mov ax, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x01
        add ecx, 2
        ; Exact mapped bytes 66 3B C7: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 75 F5: jne 0x58877958
        __asm _emit 0x75
        __asm _emit 0xf5
        sub ecx, esi
        xor eax, eax
        sar ecx, 1
        cmp ecx, 3
        push 1
        sete al
        push 5887789fh
        mov dword ptr [edx + 64h], eax
        ; Exact mapped bytes FF 15 A0 41 89 58: call dword ptr [0x588941a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp + 8]
        test byte ptr [eax], 4
        ; Exact mapped bytes 75 02: jne 0x58877989
        __asm _emit 0x75
        __asm _emit 0x02
        mov dword ptr [eax], edi
        pop edi
        pop esi
        pop ebp
        ret
    }
}
