// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004041A0 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_004041a0_004041A0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 439436h
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
        add ecx, 13ch
        ; Exact mapped bytes E8 DA 99 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x99
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 130h
        ; Exact mapped bytes E8 C8 99 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x99
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 124h
        ; Exact mapped bytes E8 B6 99 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x99
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 120h
        ; Exact mapped bytes E8 A4 99 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x99
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 6F E5 00 00: call 0x412785
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xe5
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
