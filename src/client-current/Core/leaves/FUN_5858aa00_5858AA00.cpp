// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5858AA00 .. +0x9E bytes.
extern "C" __declspec(naked) void FUN_5858aa00_5858AA00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 214h], 3
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0b4h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0cch], 0
        ; Exact mapped bytes 7C 0D: jl 0x5858aa3c
        __asm _emit 0x7c
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0cch], 0ffffff6ah
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2b8h]
        mov dword ptr [ebp - 0ch], edx
        push 0fh
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 3E B5 EF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xb5
        __asm _emit 0xef
        __asm _emit 0xff
        push 23h
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 21 A0 EF FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xa0
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes A1 94 20 96 58: mov eax, dword ptr [0x58962094]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 4A 13 23 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x13
        __asm _emit 0x23
        __asm _emit 0x00
        push 23h
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FD 9F EF FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x9f
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 18h], ecx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 E8: call dword ptr [ebp - 0x18]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe8
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
