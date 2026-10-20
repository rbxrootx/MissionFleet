// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883B6BC .. +0xA2 bytes.
extern "C" __declspec(naked) void FUN_5883b6bc_5883B6BC() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        mov esi, ecx
        push edi
        ; Exact mapped bytes E8 FC FB FF FF: call 0x5883b2c8
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 1C: je 0x5883b6ec
        __asm _emit 0x74
        __asm _emit 0x1c
        cmp dword ptr [esi + 14h], 10h
        ; Exact mapped bytes 72 04: jb 0x5883b6da
        __asm _emit 0x72
        __asm _emit 0x04
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB 02: jmp 0x5883b6dc
        __asm _emit 0xeb
        __asm _emit 0x02
        mov eax, esi
        push dword ptr [ebp + 0ch]
        sub edi, eax
        mov ecx, esi
        push edi
        push esi
        ; Exact mapped bytes E8 33 FF FF FF: call 0x5883b61d
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 62: jmp 0x5883b74e
        __asm _emit 0xeb
        __asm _emit 0x62
        mov ecx, dword ptr [esi + 10h]
        mov eax, ecx
        push ebx
        mov ebx, dword ptr [ebp + 0ch]
        not eax
        mov dword ptr [ebp + 8], ecx
        cmp eax, ebx
        ; Exact mapped bytes 76 56: jbe 0x5883b754
        __asm _emit 0x76
        __asm _emit 0x56
        lea eax, [ecx + ebx]
        test ebx, ebx
        ; Exact mapped bytes 74 46: je 0x5883b74b
        __asm _emit 0x74
        __asm _emit 0x46
        push 0
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 59 FB FF FF: call 0x5883b268
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 38: je 0x5883b74b
        __asm _emit 0x74
        __asm _emit 0x38
        cmp dword ptr [esi + 14h], 10h
        ; Exact mapped bytes 72 04: jb 0x5883b71d
        __asm _emit 0x72
        __asm _emit 0x04
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes EB 02: jmp 0x5883b71f
        __asm _emit 0xeb
        __asm _emit 0x02
        mov ecx, esi
        test ebx, ebx
        ; Exact mapped bytes 74 10: je 0x5883b733
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [esi + 10h]
        push ebx
        add eax, ecx
        push edi
        push eax
        ; Exact mapped bytes E8 60 11 01 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 8]
        add ecx, ebx
        cmp dword ptr [esi + 14h], 10h
        mov dword ptr [esi + 10h], ecx
        ; Exact mapped bytes 72 04: jb 0x5883b745
        __asm _emit 0x72
        __asm _emit 0x04
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB 02: jmp 0x5883b747
        __asm _emit 0xeb
        __asm _emit 0x02
        mov eax, esi
        mov byte ptr [eax + ecx], 0
        mov eax, esi
        pop ebx
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        push 588c1cfch
        ; Exact mapped bytes E8 2F 30 FF FF: call 0x5882e78d
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
