// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587370F0 .. +0x7C bytes.
extern "C" __declspec(naked) void FUN_587370f0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0ch]
        mov dword ptr [esi + 24h], eax
        test eax, eax
        ; Exact mapped bytes 74 33: je 0x58737134
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes E8 DA F5 19 00: call 0x588d66e0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xf5
        __asm _emit 0x19
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 75 5B: jne 0x58737168
        __asm _emit 0x75
        __asm _emit 0x5b
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [eax + 4]
        mov ecx, dword ptr [esi + 0ch]
        mov al, byte ptr [edx + 354h]
        cmp al, byte ptr [ecx + 354h]
        ; Exact mapped bytes 75 42: jne 0x58737168
        __asm _emit 0x75
        __asm _emit 0x42
        pop esi
        mov dword ptr [esp + 4], 5898cb04h
        ; Exact mapped bytes E9 1C FC 19 00: jmp 0x588d6d50
        __asm _emit 0xe9
        __asm _emit 0x1c
        __asm _emit 0xfc
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes E8 A7 F5 19 00: call 0x588d66e0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xf5
        __asm _emit 0x19
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 75 28: jne 0x58737168
        __asm _emit 0x75
        __asm _emit 0x28
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [esi + 0ch]
        mov dl, byte ptr [eax + 354h]
        cmp dl, byte ptr [ecx + 354h]
        ; Exact mapped bytes 75 0E: jne 0x58737168
        __asm _emit 0x75
        __asm _emit 0x0e
        pop esi
        mov dword ptr [esp + 4], 5898caf8h
        ; Exact mapped bytes E9 E8 FB 19 00: jmp 0x588d6d50
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x19
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
