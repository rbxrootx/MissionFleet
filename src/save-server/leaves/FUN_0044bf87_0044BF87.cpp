// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044BF87 .. +0xA6 bytes.
extern "C" __declspec(naked) void FUN_0044bf87_0044BF87() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58dc4fh
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
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D5 AD 08 00: call 0x4d6d80
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xad
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 1ch], ecx
        push 0ah
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 20h
        ; Exact mapped bytes E8 78 B6 07 00: call 0x4c7640
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xb6
        __asm _emit 0x07
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 3ch], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 40h], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 44h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 48h], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 4ch
        ; Exact mapped bytes E8 01 15 00 00: call 0x44d500
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 50h
        ; Exact mapped bytes E8 16 15 00 00: call 0x44d520
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 63915ch
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
