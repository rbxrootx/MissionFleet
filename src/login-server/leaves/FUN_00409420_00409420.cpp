// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00409420 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_00409420_00409420() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 439be6h
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
        mov dword ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 124h
        ; Exact mapped bytes E8 5A 47 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 120h
        ; Exact mapped bytes E8 48 47 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 114h
        ; Exact mapped bytes E8 36 47 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 110h
        ; Exact mapped bytes E8 24 47 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 EF 92 00 00: call 0x412785
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
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
        ret
    }
}
