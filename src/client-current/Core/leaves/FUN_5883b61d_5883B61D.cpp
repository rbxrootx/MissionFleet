// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883B61D .. +0x9E bytes.
extern "C" __declspec(naked) void FUN_5883b61d_5883B61D() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        mov ebx, dword ptr [ebp + 8]
        push esi
        push edi
        mov edi, dword ptr [ebp + 0ch]
        mov esi, ecx
        push edi
        mov ecx, ebx
        ; Exact mapped bytes E8 A6 FA FF FF: call 0x5883b0d9
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebx + 10h]
        mov ecx, dword ptr [esi + 10h]
        sub eax, edi
        mov edi, dword ptr [ebp + 10h]
        cmp edi, eax
        mov dword ptr [ebp + 8], ecx
        cmova edi, eax
        mov eax, ecx
        not eax
        cmp eax, edi
        ; Exact mapped bytes 76 63: jbe 0x5883b6b1
        __asm _emit 0x76
        __asm _emit 0x63
        lea eax, [ecx + edi]
        test edi, edi
        ; Exact mapped bytes 74 53: je 0x5883b6a8
        __asm _emit 0x74
        __asm _emit 0x53
        push 0
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 09 FC FF FF: call 0x5883b268
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 45: je 0x5883b6a8
        __asm _emit 0x74
        __asm _emit 0x45
        cmp dword ptr [ebx + 14h], 10h
        ; Exact mapped bytes 72 02: jb 0x5883b66b
        __asm _emit 0x72
        __asm _emit 0x02
        mov ebx, dword ptr [ebx]
        cmp dword ptr [esi + 14h], 10h
        ; Exact mapped bytes 72 04: jb 0x5883b675
        __asm _emit 0x72
        __asm _emit 0x04
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes EB 02: jmp 0x5883b677
        __asm _emit 0xeb
        __asm _emit 0x02
        mov ecx, esi
        test edi, edi
        ; Exact mapped bytes 74 15: je 0x5883b690
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 0ch]
        add eax, ebx
        push edi
        push eax
        mov eax, dword ptr [esi + 10h]
        add eax, ecx
        push eax
        ; Exact mapped bytes E8 03 12 01 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 8]
        add ecx, edi
        cmp dword ptr [esi + 14h], 10h
        mov dword ptr [esi + 10h], ecx
        ; Exact mapped bytes 72 04: jb 0x5883b6a2
        __asm _emit 0x72
        __asm _emit 0x04
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB 02: jmp 0x5883b6a4
        __asm _emit 0xeb
        __asm _emit 0x02
        mov eax, esi
        mov byte ptr [eax + ecx], 0
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        push 588c1cfch
        ; Exact mapped bytes E8 D2 30 FF FF: call 0x5882e78d
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
