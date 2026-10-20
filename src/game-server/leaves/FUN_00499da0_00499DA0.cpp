// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00499DA0 .. +0xBA bytes.
extern "C" __declspec(naked) void FUN_00499da0_00499DA0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e620h
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
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 21: je 0x499dee
        __asm _emit 0x74
        __asm _emit 0x21
        push 5caea4h
        push 0
        push 369h
        push 5cae8ch
        push 2
        ; Exact mapped bytes E8 4B 6D 01 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x499dee
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D1: jne 0x499dc5
        __asm _emit 0x75
        __asm _emit 0xd1
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 4], eax
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx], 0
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp + 8]
        shl edx, 3
        push edx
        ; Exact mapped bytes E8 A7 35 05 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x35
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx], edx
        ; Exact mapped bytes EB 06: jmp 0x499e35
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, 499e35h
        ret
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 07: jne 0x499e4b
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 8007000eh
        ; Exact mapped bytes EB 02: jmp 0x499e4d
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
