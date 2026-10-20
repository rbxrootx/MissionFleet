// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00528392 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_00528392_00528392() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58c191h
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
        ; Exact mapped bytes E8 4D 5B 00 00: call 0x52df03
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 3ch
        ; Exact mapped bytes E8 09 AE 00 00: call 0x5331d1
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 44h
        ; Exact mapped bytes E8 FA AD 00 00: call 0x5331d1
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 4ch
        ; Exact mapped bytes E8 EB AD 00 00: call 0x5331d1
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 54h
        ; Exact mapped bytes E8 DC AD 00 00: call 0x5331d1
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 6347e8h
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
        ret
    }
}
