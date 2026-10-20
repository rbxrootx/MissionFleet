// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046DA80 .. +0xF2 bytes.
extern "C" __declspec(naked) void _x64toa_20_0046DA80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 22: je 0x46dab4
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx], 2dh
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 8]
        neg eax
        mov ecx, dword ptr [ebp + 0ch]
        adc ecx, 0
        neg ecx
        mov dword ptr [ebp + 8], eax
        mov dword ptr [ebp + 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 14h]
        xor ecx, ecx
        push ecx
        push eax
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 62 B3 00 00: call 0x478e30
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 14h]
        xor edx, edx
        push edx
        push ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 DB B2 00 00: call 0x478dc0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp + 8], eax
        mov dword ptr [ebp + 0ch], edx
        cmp dword ptr [ebp - 0ch], 9
        ; Exact mapped bytes 76 16: jbe 0x46db07
        __asm _emit 0x76
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 0ch]
        add edx, 57h
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax], dl
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 14: jmp 0x46db1b
        __asm _emit 0xeb
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 0ch]
        add edx, 30h
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax], dl
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 77 99: ja 0x46daba
        __asm _emit 0x77
        __asm _emit 0x99
        ; Exact mapped bytes 72 06: jb 0x46db29
        __asm _emit 0x72
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 77 91: ja 0x46daba
        __asm _emit 0x77
        __asm _emit 0x91
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx], 0
        mov eax, dword ptr [ebp - 4]
        sub eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ecx]
        mov byte ptr [ebp - 10h], dl
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dl, byte ptr [ecx]
        mov byte ptr [eax], dl
        mov eax, dword ptr [ebp - 8]
        mov cl, byte ptr [ebp - 10h]
        mov byte ptr [eax], cl
        mov edx, dword ptr [ebp - 4]
        sub edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 72 CC: jb 0x46db38
        __asm _emit 0x72
        __asm _emit 0xcc
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
