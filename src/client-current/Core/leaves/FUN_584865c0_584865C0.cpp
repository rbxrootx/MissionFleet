// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584865C0 .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_584865c0_584865C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 8], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 4F: je 0x58486629
        __asm _emit 0x74
        __asm _emit 0x4f
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 49: je 0x58486629
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 3F: je 0x58486629
        __asm _emit 0x74
        __asm _emit 0x3f
        mov edx, dword ptr [ebp + 14h]
        mov al, byte ptr [edx]
        mov byte ptr [ebp - 1], al
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 1
        mov dword ptr [ebp + 14h], ecx
        mov edx, dword ptr [ebp + 8]
        mov al, byte ptr [ebp - 1]
        mov byte ptr [edx], al
        mov ecx, dword ptr [ebp + 8]
        add ecx, 1
        mov dword ptr [ebp + 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        sub edx, 1
        mov dword ptr [ebp + 0ch], edx
        mov eax, dword ptr [ebp + 18h]
        sub eax, 1
        mov dword ptr [ebp + 18h], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB AB: jmp 0x584865d4
        __asm _emit 0xeb
        __asm _emit 0xab
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 19: jne 0x58486648
        __asm _emit 0x75
        __asm _emit 0x19
        mov edx, dword ptr [ebp + 8]
        sub edx, 1
        mov dword ptr [ebp + 8], edx
        mov eax, dword ptr [ebp - 8]
        sub eax, 1
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 0ch], 8007007ah
        mov ecx, dword ptr [ebp + 8]
        mov byte ptr [ecx], 0
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 08: je 0x5848665c
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ebp - 0ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
