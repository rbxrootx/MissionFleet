// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856EF60 .. +0x87 bytes.
extern "C" __declspec(naked) void FUN_5856ef60_5856EF60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5856ef7b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 7D 2E: jge 0x5856efaf
        __asm _emit 0x7d
        __asm _emit 0x2e
        push 18h
        push 0
        imul ecx, dword ptr [ebp - 8], 18h
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 130h]
        push eax
        ; Exact mapped bytes E8 77 DE 2D 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xde
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 178h], 0ffffffffh
        ; Exact mapped bytes EB C3: jmp 0x5856ef72
        __asm _emit 0xeb
        __asm _emit 0xc3
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 184h], 0ffffffffh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 188h], 0ffffffffh
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 18ch], 0ffffffffh
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 190h], 0ffffffffh
        mov esp, ebp
        pop ebp
        ret
    }
}
