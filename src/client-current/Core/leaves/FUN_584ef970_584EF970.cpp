// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584EF970 .. +0xAB bytes.
extern "C" __declspec(naked) void FUN_584ef970_584EF970() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7B FF FF FF: call 0x584ef900
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 4
        ; Exact mapped bytes 7E 3C: jle 0x584ef9cd
        __asm _emit 0x7e
        __asm _emit 0x3c
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 65 FF FF FF: call 0x584ef900
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], eax
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 52 FF FF FF: call 0x584ef900
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        sub eax, 4
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 2eh
        ; Exact mapped bytes 75 04: jne 0x584ef9cd
        __asm _emit 0x75
        __asm _emit 0x04
        mov al, 1
        ; Exact mapped bytes EB 48: jmp 0x584efa15
        __asm _emit 0xeb
        __asm _emit 0x48
        mov dword ptr [ebp - 30h], 1
        mov dword ptr [ebp - 28h], 7
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1B FF FF FF: call 0x584ef900
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 18h], edx
        sub esp, 1ch
        mov ecx, 7
        lea esi, [ebp - 34h]
        mov edi, esp
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 E8: call dword ptr [ebp - 0x18]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe8
        xor al, al
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
