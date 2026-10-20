// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588580B2 .. +0xC6 bytes.
extern "C" __declspec(naked) void FUN_588580b2_588580B2() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        test esi, esi
        ; Exact mapped bytes 75 1C: jne 0x588580dc
        __asm _emit 0x75
        __asm _emit 0x1c
        mov esi, dword ptr [ebp + 0ch]
        mov ecx, esi
        ; Exact mapped bytes E8 9D 05 00 00: call 0x58858667
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        mov dword ptr [esi + 8], ebx
        mov dword ptr [esi + 0ch], ebx
        mov dword ptr [esi + 10h], ebx
        xor eax, eax
        ; Exact mapped bytes E9 98 00 00 00: jmp 0x58858174
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        ; Exact mapped bytes 66 39 1E: cmp word ptr [esi], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x1e
        ; Exact mapped bytes 75 1C: jne 0x588580ff
        __asm _emit 0x75
        __asm _emit 0x1c
        mov esi, dword ptr [ebp + 0ch]
        cmp dword ptr [esi + 0ch], ebx
        ; Exact mapped bytes 75 0D: jne 0x588580f8
        __asm _emit 0x75
        __asm _emit 0x0d
        push 1
        mov ecx, esi
        ; Exact mapped bytes E8 8D 05 00 00: call 0x58858681
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 7C: jne 0x58858174
        __asm _emit 0x75
        __asm _emit 0x7c
        mov eax, dword ptr [esi + 8]
        mov byte ptr [eax], bl
        ; Exact mapped bytes EB D3: jmp 0x588580d2
        __asm _emit 0xeb
        __asm _emit 0xd3
        push ebx
        push ebx
        push ebx
        push ebx
        push -1
        push esi
        push ebx
        push dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 DA 7A 01 00: call 0x5886fbe9
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 20h
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x5885812c
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 F1 A2 00 00: call 0x58862413
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        ; Exact mapped bytes E8 47 A3 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 48: jmp 0x58858174
        __asm _emit 0xeb
        __asm _emit 0x48
        push edi
        mov edi, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [edi + 0ch]
        ; Exact mapped bytes 76 0C: jbe 0x58858141
        __asm _emit 0x76
        __asm _emit 0x0c
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 44 05 00 00: call 0x58858681
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 32: jne 0x58858173
        __asm _emit 0x75
        __asm _emit 0x32
        push dword ptr [edi + 0ch]
        mov ecx, dword ptr [ebp + 10h]
        push dword ptr [edi + 8]
        push esi
        push dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 B1 04 00 00: call 0x58858604
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x5885816d
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 B0 A2 00 00: call 0x58862413
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        ; Exact mapped bytes E8 06 A3 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 06: jmp 0x58858173
        __asm _emit 0xeb
        __asm _emit 0x06
        dec eax
        mov dword ptr [edi + 10h], eax
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
