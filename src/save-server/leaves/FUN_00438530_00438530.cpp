// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00438530 .. +0xDA bytes.
extern "C" __declspec(naked) void FUN_00438530_00438530() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 28h], ecx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        cmp dword ptr [ebp + 8], edx
        ; Exact mapped bytes 77 10: ja 0x438559
        __asm _emit 0x77
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        cmp dword ptr [ebp + 10h], edx
        ; Exact mapped bytes 76 0D: jbe 0x438566
        __asm _emit 0x76
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 3D D8 FF FF: call 0x435da0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        sub edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 73 08: jae 0x438587
        __asm _emit 0x73
        __asm _emit 0x08
        lea ecx, [ebp - 8]
        mov dword ptr [ebp - 2ch], ecx
        ; Exact mapped bytes EB 06: jmp 0x43858d
        __asm _emit 0xeb
        __asm _emit 0x06
        lea edx, [ebp + 14h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        mov eax, 0fffffffeh
        sub eax, dword ptr [ebp - 4]
        cmp edx, eax
        ; Exact mapped bytes 76 0D: jbe 0x4385bf
        __asm _emit 0x76
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 44 DA FF FF: call 0x436000
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        add ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        add eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 20h], eax
        mov cl, byte ptr [ebp - 1ch]
        mov byte ptr [ebp - 18h], cl
        lea edx, [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 CF FC 00 00: call 0x4482d0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
