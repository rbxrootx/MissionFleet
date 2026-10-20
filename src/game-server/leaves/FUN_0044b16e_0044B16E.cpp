// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044B16E .. +0x1C6 bytes.
extern "C" __declspec(naked) void FUN_0044b16e_0044B16E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        push edi
        push ecx
        lea edi, [ebp - 38h]
        mov ecx, 0eh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 38h], ecx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 168h]
        add ecx, 78h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 24h], 4
        mov dword ptr [ebp - 28h], 0
        mov edx, dword ptr [ebp - 8]
        xor eax, eax
        mov al, byte ptr [edx + 19h]
        mov dword ptr [ebp - 2ch], eax
        lea ecx, [ebp - 24h]
        push ecx
        lea edx, [ebp - 28h]
        push edx
        lea eax, [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 CE AC FC FF: call 0x415e90
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xac
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x44b1ce
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 57 01 00 00: jmp 0x44b325
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 31h
        mov dword ptr [ebp - 34h], 0
        lea ecx, [ebp - 30h]
        push ecx
        lea edx, [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp - 8]
        xor ecx, ecx
        mov cl, byte ptr [eax + 19h]
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx*4]
        push eax
        ; Exact mapped bytes E8 98 AC FC FF: call 0x415e90
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xac
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x44b204
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 21 01 00 00: jmp 0x44b325
        __asm _emit 0xe9
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        xor edx, edx
        mov dl, byte ptr [ecx + 19h]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 8]
        xor ecx, ecx
        mov cl, byte ptr [eax + 19h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 10h]
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16bdch]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 0F 85 DD 00 00 00: jne 0x44b325
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [ebp - 4]
        mov cl, byte ptr [eax + 14h]
        add cl, 1
        mov edx, dword ptr [ebp - 8]
        add edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 14h], cl
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 10h]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16c04h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes 8B 15 7C CB 5D 00: mov edx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov eax, dword ptr [edx + 40cc8h]
        mov ecx, dword ptr [eax + 0ca0h]
        ; Exact mapped bytes E8 3A E8 FD FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes 66 8B 4D F0: mov cx, word ptr [ebp - 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 38h]
        push eax
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 40c98h]
        ; Exact mapped bytes E8 5D F9 FE FF: call 0x43ac3c
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xf9
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        add edx, dword ptr [ebp - 4]
        xor eax, eax
        mov al, byte ptr [edx + 14h]
        cmp eax, 0ah
        ; Exact mapped bytes 7C 36: jl 0x44b325
        __asm _emit 0x7c
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes 8B 0D 80 CB 5D 00: mov ecx, dword ptr [0x5dcb80]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 FD BE FC FF: call 0x417203
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xbe
        __asm _emit 0xfc
        __asm _emit 0xff
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        shl ecx, 10h
        or ecx, dword ptr [ebp - 4]
        push ecx
        push 8002f005h
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 0D BF 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xbf
        __asm _emit 0x03
        __asm _emit 0x00
        pop edi
        add esp, 38h
        cmp ebp, esp
        ; Exact mapped bytes E8 B0 D4 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xd4
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
