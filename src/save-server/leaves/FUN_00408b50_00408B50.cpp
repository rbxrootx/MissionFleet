// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00408B50 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_00408b50_00408B50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 48h]
        mov ecx, 12h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 1F: je 0x408b9d
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 8]
        shl edx, 5
        add edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        add edx, ecx
        mov dword ptr [ebp - 8], edx
        mov edx, dword ptr [ebp + 8]
        add edx, 1
        mov dword ptr [ebp + 8], edx
        ; Exact mapped bytes EB D7: jmp 0x408b74
        __asm _emit 0xeb
        __asm _emit 0xd7
        mov eax, dword ptr [ebp - 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
