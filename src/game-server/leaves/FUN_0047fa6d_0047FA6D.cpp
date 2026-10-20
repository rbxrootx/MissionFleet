// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047FA6D .. +0x8C bytes.
extern "C" __declspec(naked) void FUN_0047fa6d_0047FA6D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x47fa97
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 64h
        ; Exact mapped bytes 7D 57: jge 0x47faf4
        __asm _emit 0x7d
        __asm _emit 0x57
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 37ch
        cmp dword ptr [eax + ecx + 2e4h], 0
        ; Exact mapped bytes 75 28: jne 0x47fae4
        __asm _emit 0x75
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 37ch
        mov eax, dword ptr [ebp - 4]
        mov esi, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + edx + 224h]
        mov dword ptr [esi + eax*4 + 60h], ecx
        ; Exact mapped bytes EB 0E: jmp 0x47faf2
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + edx*4 + 60h], 0ffffffffh
        ; Exact mapped bytes EB 9A: jmp 0x47fa8e
        __asm _emit 0xeb
        __asm _emit 0x9a
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
