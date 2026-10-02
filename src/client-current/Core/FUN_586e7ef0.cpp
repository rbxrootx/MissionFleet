// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Allocates replacement storage, transfers 24-byte string elements, and commits the new descriptor.
// Indexed function extent: 0x586E7EF0 .. +0xE5 bytes.
extern "C" __declspec(naked) void FUN_586e7ef0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888c99dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 28h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F0 FF D9 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 1ch]
        add edx, 4
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 24h]
        mov eax, dword ptr [eax]
        sub eax, dword ptr [ecx]
        cdq
        mov ecx, 18h
        idiv ecx
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 C6 C9 E1 FF: call 0x58504920
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xc9
        __asm _emit 0xe1
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 2ch], ecx
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        push edx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 CC D9 E1 FF: call 0x58505960
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xd9
        __asm _emit 0xe1
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 30h], 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 AC 0A E2 FF: call 0x58508a60
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x0a
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 ED 14 00 00: call 0x586e94b0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
