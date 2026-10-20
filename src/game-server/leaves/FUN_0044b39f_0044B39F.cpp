// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044B39F .. +0x116 bytes.
extern "C" __declspec(naked) void FUN_0044b39f_0044B39F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push edi
        push ecx
        lea edi, [ebp - 28h]
        mov ecx, 0ah
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 28h], ecx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 168h]
        add ecx, 78h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 14h], 4
        mov dword ptr [ebp - 18h], 0
        mov edx, dword ptr [ebp - 8]
        xor eax, eax
        mov al, byte ptr [edx + 19h]
        mov dword ptr [ebp - 1ch], eax
        lea ecx, [ebp - 14h]
        push ecx
        lea edx, [ebp - 18h]
        push edx
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 9D AA FC FF: call 0x415e90
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xaa
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x44b3ff
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 A5 00 00 00: jmp 0x44b4a4
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 31h
        mov dword ptr [ebp - 24h], 0
        lea ecx, [ebp - 20h]
        push ecx
        lea edx, [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp - 8]
        xor ecx, ecx
        mov cl, byte ptr [eax + 19h]
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx*4]
        push eax
        ; Exact mapped bytes E8 67 AA FC FF: call 0x415e90
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xaa
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x44b432
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 72: jmp 0x44b4a4
        __asm _emit 0xeb
        __asm _emit 0x72
        mov ecx, dword ptr [ebp - 8]
        xor edx, edx
        mov dl, byte ptr [ecx + 19h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 8]
        xor eax, eax
        mov al, byte ptr [edx + 19h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 10h]
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16bdch]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 75 32: jne 0x44b4a4
        __asm _emit 0x75
        __asm _emit 0x32
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 8]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 76 27: jbe 0x44b4a4
        __asm _emit 0x76
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 10h]
        shl ecx, 10h
        or ecx, 2
        push ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        ; Exact mapped bytes A1 7C CB 5D 00: mov eax, dword ptr [0x5dcb7c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 40ca8h]
        ; Exact mapped bytes E8 11 72 03 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x72
        __asm _emit 0x03
        __asm _emit 0x00
        pop edi
        add esp, 28h
        cmp ebp, esp
        ; Exact mapped bytes E8 31 D3 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xd3
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
