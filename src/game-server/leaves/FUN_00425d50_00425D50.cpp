// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00425D50 .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_00425d50_00425D50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x425d79
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 64h
        ; Exact mapped bytes 7D 39: jge 0x425db8
        __asm _emit 0x7d
        __asm _emit 0x39
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [edx + eax*4 + 94h], -1
        ; Exact mapped bytes 75 21: jne 0x425db6
        __asm _emit 0x75
        __asm _emit 0x21
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 37ch
        cmp dword ptr [edx + eax + 2e4h], 1
        ; Exact mapped bytes 75 05: jne 0x425db6
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 05: jmp 0x425dbb
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes EB B8: jmp 0x425d70
        __asm _emit 0xeb
        __asm _emit 0xb8
        or eax, 0ffffffffh
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
