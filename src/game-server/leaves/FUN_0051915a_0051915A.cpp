// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051915A .. +0x77 bytes.
extern "C" __declspec(naked) void FUN_0051915a_0051915A() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57dc61h
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
        sub esp, 0ch
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 14h], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 80 7D 01 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 33 00 00 00: call 0x5191d1
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D0 42 FD FF: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x42
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        or al, 1
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 8E 46 FD FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x46
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
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
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
