// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00432EE6 .. +0xA8 bytes.
extern "C" __declspec(naked) void FUN_00432ee6_00432EE6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 04: jne 0x432f0a
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 7E: jmp 0x432f88
        __asm _emit 0xeb
        __asm _emit 0x7e
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ecx + 58h]
        mov dword ptr [ebp - 4], edx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x432f2b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + 80h]
        ; Exact mapped bytes 7D 47: jge 0x432f86
        __asm _emit 0x7d
        __asm _emit 0x47
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 8]
        imul eax, dword ptr [edx + 0a8h]
        mov ecx, dword ptr [ebp - 4]
        add ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 48 03 00 00: mov ax, word ptr [edx + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 19: jne 0x432f84
        __asm _emit 0x75
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 8]
        imul eax, eax, 368h
        mov ecx, dword ptr [edx + 4]
        add eax, ecx
        ; Exact mapped bytes EB 04: jmp 0x432f88
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 9C: jmp 0x432f22
        __asm _emit 0xeb
        __asm _emit 0x9c
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
