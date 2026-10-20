// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885DBB9 .. +0x80 bytes.
extern "C" __declspec(naked) void FUN_5885dbb9_5885DBB9() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 8ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov esi, ecx
        lea ecx, [ebp - 8ch]
        mov eax, dword ptr [esi]
        push dword ptr [eax]
        ; Exact mapped bytes E8 F7 A0 FF FF: call 0x58857cd7
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xa0
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 4]
        lea ecx, [ebp - 74h]
        and dword ptr [ebp - 78h], 0
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 7ch], eax
        mov eax, dword ptr [esi + 10h]
        push dword ptr [eax]
        lea eax, [ebp - 88h]
        push eax
        mov eax, dword ptr [esi + 0ch]
        push dword ptr [eax]
        mov eax, dword ptr [esi + 8]
        push dword ptr [eax + 4]
        push dword ptr [eax]
        lea eax, [ebp - 7ch]
        push eax
        ; Exact mapped bytes E8 F1 FE FF FF: call 0x5885db02
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 74h]
        ; Exact mapped bytes E8 99 2B 00 00: call 0x588607b2
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [ebp - 80h], 0
        pop esi
        ; Exact mapped bytes 74 0D: je 0x5885dc2d
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 8ch]
        and dword ptr [ecx + 350h], 0fffffffdh
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 19 34 FD FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x34
        __asm _emit 0xfd
        __asm _emit 0xff
        leave
        ret
    }
}
