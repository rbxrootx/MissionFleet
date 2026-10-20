// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58857D70 .. +0xA3 bytes.
extern "C" __declspec(naked) void FUN_58857d70_58857D70() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 14h
        lea ecx, [ebp - 14h]
        push ebx
        push esi
        push dword ptr [ebp + 10h]
        xor ebx, ebx
        mov esi, ebx
        ; Exact mapped bytes E8 4E FF FF FF: call 0x58857cd7
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        test ecx, ecx
        ; Exact mapped bytes 75 12: jne 0x58857da2
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes E8 DA A6 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 0B 92 FF FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x92
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 5B: jmp 0x58857dfd
        __asm _emit 0xeb
        __asm _emit 0x5b
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 8], ebx
        ; Exact mapped bytes 75 0F: jne 0x58857db9
        __asm _emit 0x75
        __asm _emit 0x0f
        push dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 8D 6A FF FF: call 0x5884e840
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        mov ebx, eax
        ; Exact mapped bytes EB 44: jmp 0x58857dfd
        __asm _emit 0xeb
        __asm _emit 0x44
        push edi
        mov dl, byte ptr [ecx]
        movzx edi, dl
        mov dword ptr [ebp - 4], ecx
        test byte ptr [eax + edi + 19h], 4
        ; Exact mapped bytes 74 25: je 0x58857dee
        __asm _emit 0x74
        __asm _emit 0x25
        inc ecx
        mov dl, byte ptr [ecx]
        test dl, dl
        ; Exact mapped bytes 74 18: je 0x58857de8
        __asm _emit 0x74
        __asm _emit 0x18
        shl edi, 8
        movzx eax, dl
        or edi, eax
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [ebp + 0ch], edi
        cmovne eax, esi
        mov esi, eax
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes EB 0D: jmp 0x58857df5
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov dl, bl
        test esi, esi
        ; Exact mapped bytes EB 03: jmp 0x58857df1
        __asm _emit 0xeb
        __asm _emit 0x03
        cmp dword ptr [ebp + 0ch], edi
        ; Exact mapped bytes 75 02: jne 0x58857df5
        __asm _emit 0x75
        __asm _emit 0x02
        mov esi, ecx
        inc ecx
        test dl, dl
        ; Exact mapped bytes 75 C0: jne 0x58857dba
        __asm _emit 0x75
        __asm _emit 0xc0
        pop edi
        mov ebx, esi
        cmp byte ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0A: je 0x58857e0d
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 14h]
        and dword ptr [ecx + 350h], 0fffffffdh
        pop esi
        mov eax, ebx
        pop ebx
        leave
        ret
    }
}
