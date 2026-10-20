// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884C458 .. +0xD4 bytes.
extern "C" __declspec(naked) void FUN_5884c458_5884C458() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        xor ebx, ebx
        cmp dword ptr [ebp + 0ch], 101h
        push edi
        mov edi, dword ptr [ebp + 14h]
        ; Exact mapped bytes 7C 0D: jl 0x5884c479
        __asm _emit 0x7c
        __asm _emit 0x0d
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 7C 07: jl 0x5884c479
        __asm _emit 0x7c
        __asm _emit 0x07
        mov al, 1
        cmp edi, 4
        ; Exact mapped bytes 7D 02: jge 0x5884c47b
        __asm _emit 0x7d
        __asm _emit 0x02
        mov al, bl
        mov esi, dword ptr [ebp + 8]
        push 588c2424h
        push eax
        push esi
        ; Exact mapped bytes E8 06 D1 FF FF: call 0x58849590
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        cmp dword ptr [ebp + 0ch], 11eh
        ; Exact mapped bytes 7F 0D: jg 0x5884c4a3
        __asm _emit 0x7f
        __asm _emit 0x0d
        cmp dword ptr [ebp + 10h], 1eh
        ; Exact mapped bytes 7F 07: jg 0x5884c4a3
        __asm _emit 0x7f
        __asm _emit 0x07
        mov al, 1
        cmp edi, 13h
        ; Exact mapped bytes 7E 02: jle 0x5884c4a5
        __asm _emit 0x7e
        __asm _emit 0x02
        mov al, bl
        push 588c2438h
        push eax
        push esi
        ; Exact mapped bytes E8 DF D0 FF FF: call 0x58849590
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        push 5
        add eax, 0fffffeffh
        push eax
        push esi
        ; Exact mapped bytes E8 6A 00 00 00: call 0x5884c52c
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        dec eax
        push 5
        push eax
        push esi
        mov dword ptr [ebp + 10h], eax
        ; Exact mapped bytes E8 5A 00 00 00: call 0x5884c52c
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        lea eax, [edi - 4]
        push eax
        push esi
        ; Exact mapped bytes E8 4E 00 00 00: call 0x5884c52c
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 30h
        test edi, edi
        ; Exact mapped bytes 7E 20: jle 0x5884c505
        __asm _emit 0x7e
        __asm _emit 0x20
        movzx eax, byte ptr [ebx + 588c1fa0h]
        push 3
        movzx eax, word ptr [esi + eax*4 + 0ef6h]
        push eax
        push esi
        ; Exact mapped bytes E8 2F 00 00 00: call 0x5884c52c
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        inc ebx
        cmp ebx, edi
        ; Exact mapped bytes 7C E0: jl 0x5884c4e5
        __asm _emit 0x7c
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 0ch]
        dec eax
        push eax
        lea eax, [esi + 14h]
        push eax
        push esi
        ; Exact mapped bytes E8 CA 00 00 00: call 0x5884c5de
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 10h]
        lea eax, [esi + 908h]
        push eax
        push esi
        ; Exact mapped bytes E8 BA 00 00 00: call 0x5884c5de
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
