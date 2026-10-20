// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00401000 .. +0xCE bytes.
extern "C" __declspec(naked) void FUN_00401000_00401000() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 43931ch
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
        mov dword ptr [ebp - 10h], ecx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 8
        ; Exact mapped bytes E8 97 C5 00 00: call 0x40d5c0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 154h
        ; Exact mapped bytes E8 12 C5 00 00: call 0x40d550
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 198h
        ; Exact mapped bytes E8 04 C5 00 00: call 0x40d550
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 19ch
        ; Exact mapped bytes E8 56 32 00 00: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 43c640h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 1a0h], 1
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 158h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 15ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 160h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 194h], 0
        mov edx, dword ptr [ebp - 10h]
        mov byte ptr [edx + 195h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
