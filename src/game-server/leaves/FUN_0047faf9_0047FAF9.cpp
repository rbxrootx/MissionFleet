// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047FAF9 .. +0x7C bytes.
extern "C" __declspec(naked) void FUN_0047faf9_0047FAF9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x47fb22
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 32h
        ; Exact mapped bytes 7D 46: jge 0x47fb6e
        __asm _emit 0x7d
        __asm _emit 0x46
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + ecx*4 + 1f0h], -1
        ; Exact mapped bytes 75 34: jne 0x47fb6c
        __asm _emit 0x75
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 370h
        cmp dword ptr [edx + eax + 16bdch], 1
        ; Exact mapped bytes 75 15: jne 0x47fb6c
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 1f0h], eax
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 05: jmp 0x47fb71
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes EB AB: jmp 0x47fb19
        __asm _emit 0xeb
        __asm _emit 0xab
        or eax, 0ffffffffh
        mov esp, ebp
        pop ebp
        ret
    }
}
