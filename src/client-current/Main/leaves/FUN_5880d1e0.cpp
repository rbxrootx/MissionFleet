// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5880D1E0 .. +0x86 bytes.
extern "C" __declspec(naked) void FUN_5880d1e0() {
    __asm {
        mov eax, dword ptr [esp + 8]
        push edi
        mov edi, ecx
        test eax, eax
        ; Exact mapped bytes 7E 4B: jle 0x5880d236
        __asm _emit 0x7e
        __asm _emit 0x4b
        push ebx
        push esi
        mov esi, dword ptr [esp + 10h]
        add esi, 0eh
        mov ebx, eax
        movzx ecx, word ptr [esi]
        lea eax, [esi - 0eh]
        shr ecx, 0ch
        mov ecx, dword ptr [edi + ecx*4 + 2f4h]
        push eax
        ; Exact mapped bytes E8 E4 A1 0B 00: call 0x588c73f0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xa1
        __asm _emit 0x0b
        __asm _emit 0x00
        movzx edx, word ptr [esi]
        shr edx, 0ch
        mov eax, dword ptr [edi + edx*4 + 2f4h]
        cmp dword ptr [eax + 98h], 1
        ; Exact mapped bytes 75 07: jne 0x5880d229
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [edi + 68h], 0ffffffffh
        add esi, 180h
        sub ebx, 1
        ; Exact mapped bytes 75 C2: jne 0x5880d1f6
        __asm _emit 0x75
        __asm _emit 0xc2
        pop esi
        pop ebx
        cmp dword ptr [edi + 68h], -1
        mov eax, dword ptr [edi + 428h]
        ; Exact mapped bytes 75 14: jne 0x5880d256
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, edi
        ; Exact mapped bytes E8 4E FA FF FF: call 0x5880cca0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        mov ecx, edi
        ; Exact mapped bytes E8 3E FA FF FF: call 0x5880cca0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
