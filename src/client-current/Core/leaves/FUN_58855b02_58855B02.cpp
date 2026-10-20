// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58855B02 .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_58855b02_58855B02() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edx, dword ptr [esi + 10h]
        mov byte ptr [esi + 38h], 1
        lea eax, [edx + 4]
        mov dword ptr [esi + 10h], eax
        push dword ptr [esi + 28h]
        movzx eax, word ptr [esi + 2eh]
        movzx ebx, word ptr [edx]
        push eax
        push dword ptr [esi + 4]
        push dword ptr [esi]
        ; Exact mapped bytes E8 19 C2 FF FF: call 0x58851d48
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        test al, al
        ; Exact mapped bytes 75 42: jne 0x58855b78
        __asm _emit 0x75
        __asm _emit 0x42
        mov byte ptr [ebp - 4], bl
        mov ebx, dword ptr [esi + 8]
        mov byte ptr [ebp - 3], al
        cmp byte ptr [ebx + 14h], al
        ; Exact mapped bytes 75 07: jne 0x58855b4b
        __asm _emit 0x75
        __asm _emit 0x07
        mov ecx, ebx
        ; Exact mapped bytes E8 55 03 00 00: call 0x58855ea0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 0ch]
        lea edi, [esi + 3ch]
        push ebx
        mov ecx, dword ptr [eax + 4]
        mov eax, dword ptr [edi + 404h]
        test eax, eax
        push ecx
        lea ecx, [ebp - 4]
        cmove eax, edi
        push ecx
        push eax
        ; Exact mapped bytes E8 05 81 01 00: call 0x5886dc70
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 79 17: jns 0x58855b89
        __asm _emit 0x79
        __asm _emit 0x17
        mov byte ptr [esi + 2ch], 1
        ; Exact mapped bytes EB 11: jmp 0x58855b89
        __asm _emit 0xeb
        __asm _emit 0x11
        lea edi, [esi + 3ch]
        mov eax, dword ptr [edi + 404h]
        test eax, eax
        cmove eax, edi
        ; Exact mapped bytes 66 89 18: mov word ptr [eax], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x18
        mov ecx, dword ptr [edi + 404h]
        mov al, 1
        test ecx, ecx
        mov dword ptr [esi + 34h], 1
        cmove ecx, edi
        pop edi
        mov dword ptr [esi + 30h], ecx
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
