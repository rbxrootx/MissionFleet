// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00467A90 .. +0x88 bytes.
extern "C" __declspec(naked) void FUN_00467a90_00467A90() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], 1
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, 1
        mov dword ptr [ebp + 10h], ecx
        test eax, eax
        ; Exact mapped bytes 74 60: je 0x467b0e
        __asm _emit 0x74
        __asm _emit 0x60
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        mov al, byte ptr [edx]
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 0ffh
        mov edx, dword ptr [ebp + 8]
        add edx, 1
        mov dword ptr [ebp + 8], edx
        cmp eax, ecx
        ; Exact mapped bytes 74 41: je 0x467b0c
        __asm _emit 0x74
        __asm _emit 0x41
        mov eax, dword ptr [ebp + 0ch]
        and eax, 0ffh
        push eax
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        mov dl, byte ptr [ecx - 1]
        push edx
        mov eax, dword ptr [ebp + 8]
        sub eax, 1
        push eax
        push 63e574h
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 6A 53 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x53
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x467aff
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 C6: jne 0x467acb
        __asm _emit 0x75
        __asm _emit 0xc6
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 90: jmp 0x467a9e
        __asm _emit 0xeb
        __asm _emit 0x90
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
