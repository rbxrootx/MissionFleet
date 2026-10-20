// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588F7060 .. +0x7F bytes.
extern "C" __declspec(naked) void FUN_588f7060() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov byte ptr [ebp + 60h], 0
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x588f7086
        __asm _emit 0x74
        __asm _emit 0x14
        push eax
        ; Exact mapped bytes E8 48 04 00 00: call 0x588f74c0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 01 02 00 00: call 0x588f7280
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        ; Exact mapped bytes E8 32 FF FF FF: call 0x588f6fc0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, word ptr [esp + 18h]
        mov ecx, dword ptr [ebp + 70h]
        push eax
        ; Exact mapped bytes E8 04 0A 00 00: call 0x588f7aa0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [esp + 1ch]
        test eax, eax
        ; Exact mapped bytes 7E 2B: jle 0x588f70d0
        __asm _emit 0x7e
        __asm _emit 0x2b
        mov ebx, dword ptr [esp + 20h]
        mov dword ptr [esp + 18h], eax
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        sub esp, 58h
        mov edi, esp
        mov ecx, 16h
        mov esi, ebx
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp + 64h]
        ; Exact mapped bytes E8 7A FE FF FF: call 0x588f6f40
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add ebx, 58h
        sub dword ptr [esp + 18h], 1
        ; Exact mapped bytes 75 E0: jne 0x588f70b0
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 68h]
        ; Exact mapped bytes E8 68 FB FF FF: call 0x588f6c40
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
