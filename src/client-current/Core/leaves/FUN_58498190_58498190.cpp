// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58498190 .. +0xA9 bytes.
extern "C" __declspec(naked) void FUN_58498190_58498190() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 33ch]
        cdq
        mov ecx, 3e8h
        idiv ecx
        cmp eax, 32h
        ; Exact mapped bytes 7E 35: jle 0x584981e2
        __asm _emit 0x7e
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 344h], 0fffffed4h
        ; Exact mapped bytes 7E 17: jle 0x584981d3
        __asm _emit 0x7e
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 344h]
        sub ecx, 0fh
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 344h], ecx
        ; Exact mapped bytes EB 0D: jmp 0x584981e0
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 344h], 0fffffed4h
        ; Exact mapped bytes EB 53: jmp 0x58498235
        __asm _emit 0xeb
        __asm _emit 0x53
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 344h], 0
        ; Exact mapped bytes 7D 3A: jge 0x58498228
        __asm _emit 0x7d
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 344h]
        add eax, 0fh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 344h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 33ch]
        cdq
        mov ecx, 3e8h
        idiv ecx
        cmp eax, 0fh
        ; Exact mapped bytes 7F 0D: jg 0x58498226
        __asm _emit 0x7f
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 344h], 0
        ; Exact mapped bytes EB 0D: jmp 0x58498235
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 344h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
