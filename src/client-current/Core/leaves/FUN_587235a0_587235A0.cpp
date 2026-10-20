// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587235A0 .. +0x113 bytes.
extern "C" __declspec(naked) void FUN_587235a0_587235A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push esi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 F6 00 00 00: jne 0x587236aa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 8ch]
        ; Exact mapped bytes 75 6C: jne 0x5872362e
        __asm _emit 0x75
        __asm _emit 0x6c
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 9ch], 1
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x587235e1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 0a0h]
        cmp dword ptr [ebp - 8], edx
        ; Exact mapped bytes 7D 1C: jge 0x5872360c
        __asm _emit 0x7d
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        mov edx, dword ptr [esi + edx*4 + 11a4h]
        mov dword ptr [ecx + eax*4 + 0fa4h], edx
        ; Exact mapped bytes EB CC: jmp 0x587235d8
        __asm _emit 0xeb
        __asm _emit 0xcc
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ecx + 13a6h]
        mov byte ptr [eax + 13a5h], dl
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 7C: jmp 0x587236aa
        __asm _emit 0xeb
        __asm _emit 0x7c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 90h]
        ; Exact mapped bytes 75 1D: jne 0x58723659
        __asm _emit 0x75
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 9ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 51: jmp 0x587236aa
        __asm _emit 0xeb
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 98h]
        ; Exact mapped bytes 75 43: jne 0x587236aa
        __asm _emit 0x75
        __asm _emit 0x43
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 30h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 30h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [ebp - 10h], edx
        push 0
        push 0f231h
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 F0: call dword ptr [ebp - 0x10]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 9ch], 2
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        xor eax, eax
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
