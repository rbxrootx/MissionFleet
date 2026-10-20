// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00416F1A .. +0x123 bytes.
extern "C" __declspec(naked) void FUN_00416f1a_00416F1A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 8]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16bdch]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 5ch], 1
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x416f6f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 20h
        ; Exact mapped bytes 7D 30: jge 0x416fa5
        __asm _emit 0x7d
        __asm _emit 0x30
        push 2
        push 0
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 0ah
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax + 132h]
        push edx
        ; Exact mapped bytes E8 E1 23 09 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x23
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 0ah
        mov ecx, dword ptr [ebp - 0ch]
        mov byte ptr [ecx + eax + 135h], 0
        ; Exact mapped bytes EB C1: jmp 0x416f66
        __asm _emit 0xeb
        __asm _emit 0xc1
        mov edx, dword ptr [ebp + 8]
        shl edx, 10h
        or edx, 2
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 40ca8h]
        ; Exact mapped bytes E8 F1 B6 06 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xb6
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 168h]
        add eax, 78h
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x416fe5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 7D 40: jge 0x41702b
        __asm _emit 0x7d
        __asm _emit 0x40
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + edx*4], -1
        ; Exact mapped bytes 75 32: jne 0x417029
        __asm _emit 0x75
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + ecx*4], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, dword ptr [ebp - 8]
        mov byte ptr [ecx + 14h], 0
        mov edx, dword ptr [ebp - 10h]
        mov al, byte ptr [ebp - 8]
        mov byte ptr [edx + 19h], al
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 1B 00 00 00: call 0x41703d
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 04: jmp 0x41702d
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB B1: jmp 0x416fdc
        __asm _emit 0xeb
        __asm _emit 0xb1
        xor eax, eax
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 A9 17 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x17
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
