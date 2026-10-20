// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049A5C0 .. +0xBF bytes.
extern "C" __declspec(naked) void FUN_0049a5c0_0049A5C0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e640h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edx + 18h], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 10h], edx
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [eax + 14h], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 ED 2D 05 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x2d
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx + 0ch], 0
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp + 8]
        imul edx, edx, 34h
        push edx
        ; Exact mapped bytes E8 84 2D 05 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x2d
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 0ch], edx
        ; Exact mapped bytes EB 06: jmp 0x49a659
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, 49a659h
        ret
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x49a670
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 8007000eh
        ; Exact mapped bytes EB 02: jmp 0x49a672
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
    }
}
